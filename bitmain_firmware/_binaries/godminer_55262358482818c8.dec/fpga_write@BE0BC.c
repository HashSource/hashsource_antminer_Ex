int __fastcall fpga_write(int a1, int a2)
{
  char *v4; // r0

  if ( !dword_1B327C )
    return -1;
  pthread_mutex_lock(&stru_1B3264);
  v4 = (char *)mmap64(0, 4096, 3, 1, dword_1B3280);
  if ( v4 == (char *)-1 )
    return sub_BDDF0();
  *(_DWORD *)&v4[a1] = a2;
  munmap(v4, 0x1000u);
  pthread_mutex_unlock(&stru_1B3264);
  return 0;
}
