void sub_1D8BB8()
{
  if ( dword_48794C == 1 )
  {
    if ( off_46DAB8[1] )
      off_46DAB8 = (int *)off_46DAB8[1];
  }
  else
  {
    off_46DAB8 = (int *)*off_46DAB8;
  }
}
