int __fastcall sub_2569F8(int result, int a2, int a3)
{
  int v4; // [sp+Ch] [bp-10h]

  v4 = result;
  while ( a2 < a3 )
  {
    result = rand();
    *(_BYTE *)(v4 + a2++) = result;
  }
  return result;
}
