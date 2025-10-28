int __fastcall sub_1541E8(int result)
{
  unsigned int v1; // r4

  v1 = dword_487668;
  if ( !*(_DWORD *)(dword_487668 + 68) )
  {
    sub_22F01C(result);
    result = sub_152D80(*(_DWORD *)(v1 + 60), (unsigned int)sub_153A74, v1);
    *(_DWORD *)(v1 + 68) = 1;
  }
  return result;
}
