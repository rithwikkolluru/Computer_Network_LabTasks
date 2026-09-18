# Computer Network Lab Programs (C Implementation)

This repository contains C implementations for standard undergraduate Computer Networks laboratory experiments.

## Lab Experiments

### 1. Data Link Layer Framing Methods (`01-Framing-Methods/`)
Implementation of standard data link layer framing techniques:
- `character_count.c`: Character count framing method.
- `character_stuffing.c`: Character (byte) stuffing using delimiter flag `F` and escape character `E`.
- `bit_stuffing.c`: Bit stuffing method inserting a `0` after five consecutive `1`s.

### 2. Error Detection using Cyclic Redundancy Check (`02-CRC-Polynomials/`)
Computation of CRC error detecting code using standard divisor polynomials:
- `crc12.c`: CRC-12 polynomial ($x^{12} + x^{11} + x^3 + x^2 + x + 1$).
- `crc16.c`: CRC-16 polynomial ($x^{16} + x^{15} + x^2 + 1$).
- `crc_ccitt.c`: CRC-CCITT polynomial ($x^{16} + x^{12} + x^5 + 1$).

### 3. Flow Control and Error Recovery (`03-Flow-Control-Sliding-Window/`)
- `sliding_window.c`: Simple sliding window flow control protocol.
- `go_back_n.c`: Go-Back-N ARQ protocol with lost frame recovery and retransmission.

### 4. Dijkstra's Shortest Path Algorithm (`04-Dijkstras-Shortest-Path/`)
- `dijkstra.c`: Computes shortest path from a given source router to all other nodes in a network using adjacency/cost matrix.

### 5. Broadcast Tree for Subnet (`05-Broadcast-Tree-Subnet/`)
- `broadcast_tree.c`: Generates a broadcast tree for a subnet of hosts using depth-first graph traversal.

### 6. Distance Vector Routing Algorithm (`06-Distance-Vector-Routing/`)
- `distance_vector.c`: Dynamic routing protocol based on the Bellman-Ford algorithm to compute and update routing tables at each node.

### 7. Data Encryption and Decryption (`07-Data-Encryption-Decryption/`)
- `data_encryption_decryption.c`: Symmetric substitution cipher demonstrating basic confidentiality in network communications.

### 8. Congestion Control - Leaky Bucket Algorithm (`08-Congestion-Control-Leaky-Bucket/`)
- `leaky_bucket.c`: Traffic shaping and congestion control simulating a buffer of fixed capacity with constant leak rate.

### 9. Frame Sorting in Buffers (`09-Frame-Sorting-Buffer/`)
- `frame_sorting.c`: Reassembles and sorts out-of-order received frames based on their sequence numbers in a receiver buffer.

---

## Compilation and Execution

Compile any program using standard GCC or Clang:

```bash
gcc -o program_name program_name.c
./program_name
```

## Note
These programs are written in standard C for academic and practical laboratory study.

