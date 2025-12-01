// Implementación de un perceptrón simple en Arduino con entradas analógicas

float w1 = 0.0343;
float w2 = -0.0816;
float b  = 0.0;

// Función de activación escalón
int stepFunction(float z) {
  if (z >= 0) return 1;
  else return 0;
}

// Perceptrón: calcula salida para entradas normalizadas x1, x2
int perceptron(float x1, float x2) {
  float z = (w1 * x1) + (w2 * x2) + b;
  return stepFunction(z);
}

// Medias y desviaciones calculadas previamente en Python
float mean[2] = {39.09488639, 47.58435841};
float stds[2] = {2.41115511, 23.3581082};

// Función de normalización estilo StandardScaler
float normalizar(float valor, int idx) {
  return (valor - mean[idx]) / stds[idx];
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Leer dos entradas analógicas (potenciómetros)
  int raw1 = analogRead(A0);  // Simula temperatura
  int raw2 = analogRead(A1);  // Simula humedad

  // Escalar valores a rango realista (ejemplo: temperatura 25-45°C, humedad 20-90%)
  float temp = map(raw1, 0, 1023, 25, 45);   // Ajusta según tu escenario
  float hum  = map(raw2, 0, 1023, 20, 90);   // Ajusta según tu escenario

  // Normalizar entradas
  float x1 = normalizar(temp, 0);
  float x2 = normalizar(hum, 1);

  // Calcular salida del perceptrón
  float z = (w1 * x1) + (w2 * x2) + b;
  int salida = stepFunction(z);

  // Mostrar resultados
  Serial.print("Temp: "); Serial.print(temp);
  Serial.print("  Hum: "); Serial.print(hum);
  Serial.print("  -> Normalizadas: [");
  Serial.print(x1); Serial.print(", ");
  Serial.print(x2); Serial.print("]");

  Serial.print("  Z = "); Serial.print(z);
  Serial.print("  -> Salida: "); Serial.println(salida);

  delay(1000); // Espera 1 segundo entre lecturas
}
