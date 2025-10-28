int __fastcall sub_1B3EEC(int **a1, int **a2)
{
  int *v2; // r0
  int v4; // r5
  int v5; // r0
  bool v6; // zf

  v2 = *a1;
  if ( !dword_46D448 )
  {
    v4 = *v2;
LABEL_4:
    v5 = **a2;
    goto LABEL_5;
  }
  v4 = sub_21B3EC(v2);
  if ( !dword_46D448 )
    goto LABEL_4;
  v5 = sub_21B3EC(*a2);
LABEL_5:
  v6 = v5 == 0;
  if ( v5 )
    v6 = v4 == 0;
  if ( v6 )
    sub_94708("internal: compare_classes(1)");
  return sub_1B3E54((unsigned __int8 *)(v4 + 1), (unsigned __int8 *)(v5 + 1));
}
