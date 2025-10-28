int __fastcall lzo_pclock_read(int a1, int a2)
{
  int (*v2)(void); // r3
  int result; // r0

  v2 = *(int (**)(void))(a1 + 16);
  if ( !v2 || (result = v2()) != 0 )
  {
    *(_DWORD *)(a1 + 8) = 1;
    *(_QWORD *)a2 = 0;
    *(_DWORD *)(a2 + 8) = 0;
    return 0;
  }
  return result;
}
