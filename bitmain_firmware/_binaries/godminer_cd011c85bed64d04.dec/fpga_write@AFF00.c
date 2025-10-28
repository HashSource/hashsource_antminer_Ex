int __fastcall fpga_write(int a1, int a2)
{
  char *v4; // r0

  if ( !dword_16D1B8 )
    return -1;
  pthread_mutex_lock(&stru_16D1C0);
  v4 = (char *)mmap64(0, 4096, 3, 1, dword_16D1BC);
  if ( v4 == (char *)-1 )
    return sub_AFC44(a1);
  *(_DWORD *)&v4[a1] = a2;
  munmap(v4, 0x1000u);
  pthread_mutex_unlock(&stru_16D1C0);
  return 0;
}
