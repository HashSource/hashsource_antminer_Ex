void sub_1DB2B4()
{
  int *i; // r0

  for ( i = off_46DAB8; i[1]; i = (int *)i[1] )
    ;
  do
  {
    if ( !i[2] )
      break;
    i = (int *)*i;
  }
  while ( i );
  JUMPOUT(0x1DB190);
}
