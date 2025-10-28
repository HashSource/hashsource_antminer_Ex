int __fastcall sub_59B0C(int a1, int a2)
{
  int *v4; // r0
  unsigned int v5; // r3

  v4 = (int *)sub_242FB4(a1);
  sub_53A60(*v4, (char *)(*(_DWORD *)(a1 + 28) + 5));
  v5 = (*(unsigned __int8 *)(a1 + 13) >> 1) & 0xF;
  if ( v5 >= 4 && (v5 <= 7 || v5 == 11) )
    return sub_259F38(" is \"%s\".\n", a2);
  else
    return sub_259F38(" is %s.\n", a2);
}
