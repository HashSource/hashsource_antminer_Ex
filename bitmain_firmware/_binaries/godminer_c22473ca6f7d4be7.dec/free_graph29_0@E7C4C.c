void __fastcall free_graph29_0(void (**a1)(void))
{
  if ( a1 )
  {
    a1[25]();
    free(a1);
  }
}
