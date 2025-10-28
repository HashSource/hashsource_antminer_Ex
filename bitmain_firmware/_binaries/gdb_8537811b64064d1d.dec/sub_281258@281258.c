int __fastcall sub_281258(int a1, int a2)
{
  int v3; // r0

  if ( dword_48AB0C )
  {
    v3 = sub_2978D0(a1) + dword_4707AC - a1;
    if ( v3 <= 0 )
      sub_2975F0(0);
    else
      sub_29750C(v3, a2);
    return 0;
  }
  else
  {
    ((void (*)(void))sub_2975F0)();
    return 0;
  }
}
