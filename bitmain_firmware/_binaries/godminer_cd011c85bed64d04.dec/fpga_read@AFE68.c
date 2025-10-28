int __fastcall fpga_read(int a1, _DWORD *a2)
{
  char *v4; // r0

  if ( !dword_16D1B8 )
    return -1;
  pthread_mutex_lock(&stru_16D1C0);
  v4 = (char *)((int (__fastcall *)(_DWORD, int, int, int, int))mmap64)(0, 4096, 1, 1, dword_16D1BC);
  if ( v4 == (char *)-1 )
    return sub_AFBB8(a1);
  *a2 = *(_DWORD *)&v4[a1];
  munmap(v4, 0x1000u);
  pthread_mutex_unlock(&stru_16D1C0);
  return 0;
}
