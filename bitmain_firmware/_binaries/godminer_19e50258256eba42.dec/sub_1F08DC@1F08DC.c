size_t __fastcall sub_1F08DC(_BYTE *a1, unsigned __int64 a2)
{
  bool v3; // cc
  unsigned __int64 v4; // r0
  unsigned __int64 src; // [sp+0h] [bp-1Ch] BYREF
  _BYTE *v7; // [sp+Ch] [bp-10h]
  size_t n; // [sp+14h] [bp-8h]

  v7 = a1;
  src = a2;
  n = 0;
  if ( a2 > 0xFC )
  {
    if ( src > 0xFFFF )
    {
      v3 = HIDWORD(src) != 0;
      if ( !HIDWORD(src) )
        v3 = 0;
      if ( v3 )
      {
        *v7 = -1;
        n = 8;
      }
      else
      {
        *v7 = -2;
        n = 4;
      }
    }
    else
    {
      *v7 = -3;
      n = 2;
    }
  }
  else
  {
    *v7 = src;
  }
  sub_1E0B60();
  src = v4;
  memcpy(v7 + 1, &src, n);
  return n + 1;
}
