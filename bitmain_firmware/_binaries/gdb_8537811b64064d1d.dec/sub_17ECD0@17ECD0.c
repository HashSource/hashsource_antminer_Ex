int __fastcall sub_17ECD0(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int result; // r0
  int v9; // r0

  sub_243C5C(a1);
  if ( sub_98FA0(&dword_4878EC, &dword_475848) )
    sub_94708("The program is not being run.");
  v4 = sub_24B2B4(a2);
  sub_24B3C4(v4);
  sub_230870(a1, a2);
  sub_DB384(2);
  v6 = sub_16F67C(v5);
  v7 = ((int (__fastcall *)(int))loc_16D8AC)(v6);
  if ( v7 )
  {
    result = sub_183CD0(v7);
    if ( result )
      goto LABEL_4;
  }
  else
  {
    v9 = sub_201A68(0, a2);
    result = sub_183CD0(v9);
    if ( result )
      goto LABEL_4;
  }
  result = sub_23E17C();
LABEL_4:
  if ( off_48A56C )
    return off_48A56C();
  return result;
}
