int sub_258B94()
{
  int *v0; // r3
  int v1; // r0

  v0 = &dword_487684;
  if ( dword_487684 )
  {
LABEL_5:
    *v0 = 0;
    sub_2446E0(0, 0);
  }
  if ( dword_475220 || !sub_22F0EC() )
  {
    sub_92FAC((int)"Quit");
    goto LABEL_5;
  }
  v1 = sub_92FAC((int)"Quit (expect signal SIGINT when the program is resumed)");
  return sub_258BFC(v1);
}
