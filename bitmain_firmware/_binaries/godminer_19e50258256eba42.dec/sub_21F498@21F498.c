int __fastcall sub_21F498(int result, _DWORD *a2)
{
  int v3; // [sp+4h] [bp-8h]

  v3 = result;
  if ( a2 != (_DWORD *)(result + 4) )
  {
    sub_21F498(result, (_DWORD *)*a2);
    return sub_21F498(v3, (_DWORD *)a2[1]);
  }
  return result;
}
