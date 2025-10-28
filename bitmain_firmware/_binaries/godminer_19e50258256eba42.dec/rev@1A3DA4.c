int __fastcall rev(int result, int a2)
{
  char v2; // [sp+Fh] [bp-Dh]
  int i; // [sp+10h] [bp-Ch]
  int v4; // [sp+14h] [bp-8h]

  v4 = 0;
  for ( i = a2 - 1; v4 < i; --i )
  {
    v2 = *(_BYTE *)(result + v4);
    *(_BYTE *)(result + v4) = *(_BYTE *)(result + i);
    *(_BYTE *)(result + i) = v2;
    ++v4;
  }
  return result;
}
