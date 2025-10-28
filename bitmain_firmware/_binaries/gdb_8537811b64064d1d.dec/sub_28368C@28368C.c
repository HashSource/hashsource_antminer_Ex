int __fastcall sub_28368C(_BYTE *a1, int a2, int a3)
{
  int v6; // r6
  int v7; // r0
  int v8; // r5

  if ( a2 < 0 )
    return -1;
  v6 = sub_2978D0(a1);
  if ( !sub_2978E0(a2) )
    return -1;
  dword_48AAA0 |= 0x200u;
  if ( *a1 == 94 )
    v7 = sub_29B078(a1 + 1, a3);
  else
    v7 = sub_29B070(a1, a3);
  v8 = v7;
  dword_48AAA0 &= ~0x200u;
  if ( v7 != -1 )
    v8 = sub_2978D0(v7);
  sub_2978E0(v6);
  return v8;
}
