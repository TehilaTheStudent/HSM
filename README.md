# HSM: High-Performance Hardware Security Module

This repository, **HSM**, is a high-performance cryptographic library in C++ designed to ensure secure data encryption, decryption, and authentication within automotive hardware environments. Developed as part of a Vehicle Computing Simulator in collaboration with mentors from **Mobileye** and **Extra Tech**, this project leverages cutting-edge technologies like **multithreading**, **Intel oneAPI GPU acceleration**, and **gRPC** for secure communication. 

The HSM is tailored for flexibility, supporting both **SYCL-enabled GPUs** and **CPU-only environments**, and is deployable on a variety of hardware platforms, including **Raspberry Pi**, while being scalable for integration into larger embedded systems.

---

## Key Features

### Cryptographic Functionality
- **Symmetric and Asymmetric Encryption**: Implements algorithms like AES, RSA, ECC, and digital signatures to secure communication and authenticate data.
- **PKCS#11 Standard Support**: Enables secure key management and cryptographic operations aligned with industry standards.
- **Multithreaded Architecture**: Optimized to handle concurrent encryption and authentication requests efficiently.
- **GPU Acceleration**: Utilizes Intel oneAPI and SYCL for cryptographic computations, ensuring high performance even under heavy data loads.

### Simulation and Integration
- **Seamless CAN Bus Communication**: Simulates in-vehicle communication using encrypted data, enabling realistic validation scenarios.
- **Extensibility**: Easily integrates new cryptographic algorithms or components with minimal code adjustments.
- **Predefined Encryption Configurations**: Simplifies integration by providing predefined encryption settings and user-friendly interfaces.

---

## Project Context

### Objective
The HSM is a component of a larger **Vehicle Computing Simulator**, designed to provide a secure environment for testing and validating vehicle communication systems. By simulating cryptographic processes, it reduces costs and risks associated with real-world deployment, enabling:
- Realistic simulation of secure communication over CAN Bus.
- Rapid testing of custom and off-the-shelf computing components.
- Flexible integration with encrypted and authenticated communication protocols.

### Deployment Environment
- **Server**: Runs on a **Raspberry Pi** for lightweight deployment.
- **Client**: Integrated with vehicle simulation components as a shared library (`.so`) using **gRPC** for secure communication.

---

## Technical Details

### Architecture
- **Client-Server Model**:
  - **Client**: Provides an easy-to-use interface for simulation components, abstracts complexity, and sends cryptographic requests to the server.
  - **Server**: Handles encryption, decryption, and key management on dedicated hardware, utilizing SYCL for GPU acceleration where available.

### Technology Stack
- **C++**: Chosen for its performance, memory control, and compatibility with embedded systems.
- **Intel oneAPI & SYCL**: Accelerates cryptographic computations on GPUs.
- **gRPC**: Ensures secure and efficient client-server communication.
- **GMP Library**: Supports cryptographic operations with large numbers.

---

## Benefits
- **Cost Savings**: Simulates cryptographic operations, eliminating the need for costly physical testing environments.
- **Enhanced Security**: Implements advanced encryption and key management to protect sensitive data in simulation scenarios.
- **Flexibility**: Scales across various hardware setups, from Raspberry Pi to larger systems.
- **User-Friendly Design**: Includes intuitive interfaces for managing encryption levels and algorithms.

---

This project stands as a significant step forward in secure automotive communication, combining cutting-edge cryptographic techniques with practical, real-world deployment strategies. Let me know if additional refinements are needed!
