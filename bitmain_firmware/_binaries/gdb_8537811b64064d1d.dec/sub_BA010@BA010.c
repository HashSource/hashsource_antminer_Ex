void sub_BA010()
{
  if ( !*(_BYTE *)dword_478248 )
  {
    free((void *)dword_478248);
    dword_478248 = sub_32727C("$debugdir:$datadir/auto-load");
  }
  JUMPOUT(0xB9D20);
}
