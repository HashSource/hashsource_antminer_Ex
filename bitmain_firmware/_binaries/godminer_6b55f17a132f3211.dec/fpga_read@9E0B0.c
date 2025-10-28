int __fastcall fpga_read(int a1, _DWORD *a2)
{
  char *v4; // r0

  if ( !dword_1770C4 )
    return -1;
  pthread_mutex_lock(&stru_1770AC);
  v4 = (char *)((int (__fastcall *)(_DWORD, int, int, int, int))mmap64)(0, 4096, 1, 1, dword_1770C8);
  if ( v4 == (char *)-1 )
    return sub_9DDCC();
  *a2 = *(_DWORD *)&v4[a1];
  munmap(v4, 0x1000u);
  pthread_mutex_unlock(&stru_1770AC);
  return 0;
}
