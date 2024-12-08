# **HSM: High-Performance Hardware Security Module**

Welcome to the **HSM (Hardware Security Module)** repository—a high-performance C++ cryptographic library designed to secure data encryption, decryption, and authentication in automotive hardware environments. This project, developed under the mentorship of **Mobileye** and **Extra Tech**, is part of a broader **Vehicle Computing Simulator** initiative, combining multithreading, **Intel oneAPI GPU acceleration**, and **gRPC** for secure and efficient communication.

HSM is built for flexibility, supporting both **SYCL-enabled GPUs** and **CPU-only environments**, making it deployable across diverse hardware platforms, including **Raspberry Pi**. The module ensures robust cryptographic capabilities for secure in-vehicle communication simulations.

---

## **Key Features**

### **Cryptographic Capabilities**
- **Symmetric and Asymmetric Encryption**: Implements advanced algorithms like AES, RSA, and ECC, alongside digital signatures for data authenticity.
- **PKCS#11 Standard Support**: Securely manages keys and cryptographic operations according to industry standards.
- **Multithreaded Architecture**: Optimized for high performance, capable of handling concurrent encryption and decryption requests.
- **GPU Acceleration**: Leverages **Intel oneAPI** and **SYCL** for high-speed cryptographic computations on supported GPUs.

### **Simulation and Integration**
- **CAN Bus Communication Simulation**: Enables realistic encrypted data transmission for in-vehicle communication testing.
- **Modular and Extensible**: Easily integrates new cryptographic algorithms and components with minimal configuration.
- **Predefined Encryption Configurations**: Provides user-friendly, ready-to-use cryptographic settings for seamless integration.

---

## **Project Overview**

### **Objective**
The **HSM** is a core component of the **Vehicle Computing Simulator**, a platform for securely simulating cryptographic operations within automotive systems. It allows developers to:
- Simulate secure communication over CAN Bus for testing purposes.
- Minimize costs and risks associated with real-world testing.
- Ensure flexible, authenticated communication using advanced cryptographic protocols.

### **Deployment**
- **Server**: Deployed on a **Raspberry Pi** for lightweight testing.
- **Client**: Integrated into simulation components via a shared library (`.so`) and communicates with the server using **gRPC**.

---

## **Technical Highlights**

### **System Architecture**
- **Client-Server Model**:
  - **Client**: Simplifies integration by abstracting cryptographic complexities and forwarding requests to the server.
  - **Server**: Executes cryptographic operations (encryption, decryption, key management) using GPU acceleration (SYCL-enabled) or CPUs.

### **Technology Stack**
- **C++**: Core language for cryptographic operations and performance optimization.
- **Intel oneAPI & SYCL**: Enables accelerated cryptographic processing on compatible GPUs.
- **gRPC**: Provides secure, encrypted communication between the client and server.
- **GMP Library**: Supports large-number arithmetic for cryptographic calculations.

---

## **Advantages**
- **Cost-Effective Simulation**: Eliminates the need for physical environments by securely simulating cryptographic operations.
- **Enhanced Security**: Implements industry-standard encryption and authentication to safeguard sensitive vehicle data.
- **Hardware Flexibility**: Deployable on various platforms, from lightweight devices like Raspberry Pi to powerful servers.
- **Developer-Friendly**: Offers intuitive APIs and configurations for seamless integration into simulation workflows.

