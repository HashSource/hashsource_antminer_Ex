int __fastcall lzo_pclock_close(_DWORD *a1)
{
  *a1 = 0;
  a1[1] = -1;
  a1[3] = 0;
  a1[4] = 0;
  return 0;
}
