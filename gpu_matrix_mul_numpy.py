import numpy as np
import time

# Matrix size
N = 1024

# Create random matrices
A = np.random.rand(N, N).astype(np.float32)
B = np.random.rand(N, N).astype(np.float32)

# Matrix multiplication using NumPy (which uses BLAS under the hood)
start = time.time()
C = np.dot(A, B)
end = time.time()

print("Matrix multiplication completed.")
print(f"Elapsed time: {end - start:.4f} seconds")
