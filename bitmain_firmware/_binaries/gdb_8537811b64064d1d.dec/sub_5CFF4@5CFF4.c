int __fastcall sub_5CFF4(int a1, _DWORD *a2, int a3)
{
  int v5; // r5
  const char *v6; // r1
  int *i; // r4

  v5 = *(_DWORD *)sub_243004(a1);
  if ( a3 )
  {
    if ( a3 != 1 )
      sub_94708("Usage: -file-list-shared-libraries [REGEXP]");
    a3 = *a2;
    if ( *a2 )
    {
      v6 = (const char *)re_comp(*a2);
      if ( v6 )
        sub_94708("Invalid regexp: %s", v6);
    }
  }
  sub_200C28(1);
  sub_2578D4(v5, 1);
  for ( i = *(int **)(dword_487D2C + 48); i; i = (int *)*i )
  {
    if ( *((_BYTE *)i + 520) && (!a3 || re_exec(i + 130)) )
    {
      sub_2578D4(v5, 0);
      sub_62774(v5, i);
      sub_257374(v5, 0);
    }
  }
  return sub_257374(v5, 1);
}
