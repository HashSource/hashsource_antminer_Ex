void __fastcall sub_25BD94(char *a1, void *a2)
{
  int *v4; // r0
  char *v5; // r6
  int *v6; // r0
  int *v7; // r0
  int *v8; // r0
  int v9; // [sp+0h] [bp-8h]
  char v10; // [sp+4h] [bp-4h]

  if ( off_48A57C )
  {
    off_48A57C(a1, a2);
  }
  else
  {
    v9 = 0;
    v10 = 0;
    if ( sub_22F0EC() )
    {
      v10 = 1;
      v9 = dword_46DC04;
      sub_22F070();
    }
    if ( dword_48A9BC )
      sub_259B80("");
    v4 = (int *)sub_242FB4();
    sub_256834(*v4);
    v5 = off_46DE30;
    if ( off_46DE30 )
    {
      v6 = (int *)sub_242FDC();
      sub_256878((int)v5, *v6);
    }
    v7 = (int *)sub_242FDC();
    sub_25936C(*v7, a1, a2);
    v8 = (int *)sub_242FDC();
    sub_2594D8(*v8, (char *)&word_356660);
    if ( v10 )
    {
      if ( v9 == 1 )
      {
        sub_22F070();
      }
      else if ( v9 )
      {
        if ( v9 == 2 )
          sub_22F01C();
      }
      else
      {
        sub_22EFA4();
      }
    }
  }
}
