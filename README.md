# MSCS531 Assignment 5: Exploring Data-Level Parallelism (DLP)

**Name:** Haeri Kyoung  
**GitHub:** [hkyoung38554](https://github.com/hkyoung38554)  
**Instructor GitHub Username:** `spitfire4040` (invited as collaborator)

---

## 📁 Project Overview

This repository includes all source code, experiments, and reports for MSCS531 Assignment 5. The objective was to explore concepts of Data-Level Parallelism (DLP) through hands-on implementations using SIMD instruction sets, GPU-accelerated computing, and loop-level parallelism. Each part highlights a practical example followed by performance analysis and reflective insights.

---

## 📄 Contents

| File / Folder                | Description                                                                 |
|-----------------------------|-----------------------------------------------------------------------------|
| `vector_test/`              | Contains basic SIMD vector addition using SSE                              |
| `simd_test/`                | Compares scalar vs SSE SIMD implementations                                |
| `gpu_matrix_mul_numpy.py`   | GPU-like matrix multiplication simulated using NumPy (fallback to CPU)     |
| `loop_parallelism/`         | Serial and parallel loop-based programs using OpenMP-style parallelism     |
| `requirements.txt`          | Python dependencies (if running GPU matrix mult example)                   |
| `README.md`                 | This file                                                                  |

---

## ⚙️ How to Run the Programs

From the root of this repo, you can run:

```bash
# For vector add using SSE
cd vector_test
gcc -msse -O2 -o vector_add_sse vector_add_sse.c
./vector_add_sse

# For scalar vs SIMD comparison
cd ../simd_test
gcc -O2 -o scalar_add scalar_add.c
gcc -msse -O2 -o simd_add_sse simd_add_sse.c
./scalar_add
./simd_add_sse

# For loop-level parallelism
cd ../loop_parallelism
./loop_serial
./loop_parallel

# For NumPy-based matrix multiplication
# (activate virtualenv first if needed)
python3 gpu_matrix_mul_numpy.py
