int __fastcall fpga_read(int a1, _DWORD *a2)
{
  char *v4; // r0

  if ( !dword_16C19C )
    return -1;
  pthread_mutex_lock(&stru_16C1A4);
  v4 = (char *)mmap64(0, 4096, 1, 1, dword_16C1A0);
  if ( v4 == (char *)-1 )
    return sub_AED40();
  *a2 = *(_DWORD *)&v4[a1];
  munmap(v4, 0x1000u);
  pthread_mutex_unlock(&stru_16C1A4);
  return 0;
}
