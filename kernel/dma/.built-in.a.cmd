cmd_kernel/dma/built-in.a := echo >/dev/null; rm -f kernel/dma/built-in.a; ar cDPrST kernel/dma/built-in.a kernel/dma/mapping.o kernel/dma/direct.o kernel/dma/swiotlb.o
