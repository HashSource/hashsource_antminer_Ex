void __fastcall free_bitmap(void (**a1)(void))
{
  a1[8]();
  free(a1);
}
