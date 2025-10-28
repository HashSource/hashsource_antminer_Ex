int ltc_fpga_reset()
{
  int v0; // r3
  _DWORD *addr; // [sp+10h] [bp-Ch]
  int fd; // [sp+14h] [bp-8h]

  fd = open("/dev/mem", 2);
  addr = mmap(0, 0x1000u, 3, 1, fd, -134217728);
  addr[2] = 57101;
  addr[144] = 1;
  addr[144] = 0;
  addr[1] = 30331;
  munmap(addr, 0x1000u);
  close(fd);
  return v0;
}
