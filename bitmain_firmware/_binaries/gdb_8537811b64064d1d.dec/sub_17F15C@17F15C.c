int __fastcall sub_17F15C(char *a1)
{
  int v2; // r4
  int result; // r0
  __int64 v4; // r0

  if ( !sub_22EBE4(a1) )
    sub_94708("The program is not being run.");
  sub_17E890();
  sub_17E8AC();
  sub_17E8EC();
  if ( !a1 )
    sub_51EC4("signal number");
  v2 = sub_99AB0(a1);
  if ( v2 == 143 )
  {
    v4 = sub_14CC28((int)a1);
    if ( !(_DWORD)v4 )
      goto LABEL_5;
    v2 = sub_1890C8(v4, HIDWORD(v4));
  }
  if ( !v2 )
  {
LABEL_5:
    v2 = 0;
    goto LABEL_6;
  }
  if ( !sub_189000(v2) )
    sub_94708("Signal handling set to not pass this signal to the program.");
LABEL_6:
  result = ((int (*)(void))loc_23DC0C)();
  *(_DWORD *)(result + 144) = v2;
  return result;
}
