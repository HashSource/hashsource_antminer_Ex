int __fastcall fpga_read(int a1, _DWORD *a2)
{
  char *v4; // r0

  if ( !dword_1B327C )
    return -1;
  pthread_mutex_lock(&stru_1B3264);
  v4 = (char *)mmap64(0, 4096, 1, 1, dword_1B3280);
  if ( v4 == (char *)-1 )
    return sub_BDD44();
  *a2 = *(_DWORD *)&v4[a1];
  munmap(v4, 0x1000u);
  pthread_mutex_unlock(&stru_1B3264);
  return 0;
}
