void sub_21273C()
{
  int v0; // r4
  int v1; // r0
  int v2; // [sp+8h] [bp-8h] BYREF

  v0 = sub_22046C();
  if ( !v0 )
  {
    v1 = sub_22042C(0);
    sub_21D6D8(&v2, v1, 0, 1, 0);
    if ( v2 )
    {
      v0 = *(_BYTE *)(v2 + 20) & 0x1F;
      if ( (*(_BYTE *)(v2 + 20) & 0x1F) == 0 )
        v0 = 2;
    }
    else
    {
      v0 = 2;
    }
  }
  sub_19422C(v0);
  dword_487A08 = (int)off_46D5A4[0];
}
