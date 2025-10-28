void __fastcall sub_203A84(int a1, int a2)
{
  sub_243C5C(a1);
  if ( a1 )
  {
    sub_2035B0(a1, &dword_4893F4, 1);
    sub_203404();
    if ( !a2 )
      return;
    goto LABEL_3;
  }
  if ( a2 && !sub_25A40C("Reinitialize source path to empty? ") )
    goto LABEL_3;
  if ( dword_4893F4 )
    free((void *)dword_4893F4);
  sub_203570();
  if ( a2 )
LABEL_3:
    sub_203028();
}
