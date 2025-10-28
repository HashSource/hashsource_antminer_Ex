int __fastcall fpga_write(int a1, int a2)
{
  char *v4; // r0

  if ( !dword_16C1A4 )
    return -1;
  pthread_mutex_lock(&stru_16C1AC);
  v4 = (char *)mmap64(0, 4096, 3, 1, dword_16C1A8);
  if ( v4 == (char *)-1 )
    return sub_AEF14(a1);
  *(_DWORD *)&v4[a1] = a2;
  munmap(v4, 0x1000u);
  pthread_mutex_unlock(&stru_16C1AC);
  return 0;
}
