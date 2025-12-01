# 🧬 Incubadora Inteligente con Control Neuronal

[![Open In Colab](https://colab.research.google.com/assets/colab-badge.svg)](https://colab.research.google.com/drive/1SydQAusbD01sYYKqnw8WrF61CRHIJQVn?usp=sharing)

## 📖 Descripción del Proyecto
Este proyecto implementa una **neurona artificial (perceptrón)** diseñada para controlar el ambiente crítico de una incubadora de cultivos celulares. 

El sistema resuelve un problema de lógica difusa donde las células corren riesgo solo si el ambiente es **Caliente y Seco**. La neurona aprende autónomamente a ponderar dos variables en conflicto:
* **Temperatura ($T$):** Variable de riesgo (Peso positivo/Excitatorio).
* **Humedad ($H$):** Variable de seguridad (Peso negativo/Inhibitorio).

El modelo demuestra conceptos clave de IA como la **inhibición sináptica** y la competencia de variables (ej. el "Efecto Sauna", donde la alta humedad compensa la alta temperatura evitando una falsa alarma).

## 🚀 Funcionalidades
* **Entrenamiento del Perceptrón:** Algoritmo de aprendizaje supervisado en Python.
* **Normalización de Datos:** Preprocesamiento con `StandardScaler` para equilibrar escalas (Grados vs Porcentaje).
* **Visualización:** Gráficas de la frontera de decisión lineal que separa las zonas de "Seguridad" y "Peligro".
* **Simulación de Hardware:** Integración conceptual con circuito en Tinkercad.

## 🛠️ Tecnologías
* **Python 3** (NumPy, Matplotlib, Scikit-learn)
* **Google Colab** (Entorno de desarrollo)
* **Tinkercad** (Simulación de sensores y actuadores)

## ⚡ Simulación de Circuito
El hardware complementario para este proyecto (sensores DHT11) puede visualizarse en el siguiente enlace:

> **[🔌 Ver Simulación en Tinkercad](https://www.tinkercad.com/things/ddX1ErLD8sU-terrific-leelo-fulffy)**

## 📊 Lógica de la Neurona
La fórmula aprendida por el modelo sigue la estructura:
$$Z = (w_t \cdot T) + (w_h \cdot H) + b$$

Donde:
- Si $Z \geq 0 \rightarrow$ **ALARMA ACTIVADA** (Peligro)
- Si $Z < 0 \rightarrow$ **SISTEMA SEGURO** (Silencio)

---
*Desarrollado como parte de ejercicios de Bio-Ingeniería y Fundamentos de IA.*
