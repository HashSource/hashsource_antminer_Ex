int __fastcall fpga_write(int a1, int a2)
{
  char *v4; // r0

  if ( !dword_18D4D4 )
    return -1;
  pthread_mutex_lock(&stru_18D4BC);
  v4 = (char *)mmap64(0, 4096, 3, 1, dword_18D4D8);
  if ( v4 == (char *)-1 )
    return sub_A9394();
  *(_DWORD *)&v4[a1] = a2;
  munmap(v4, 0x1000u);
  pthread_mutex_unlock(&stru_18D4BC);
  return 0;
}
