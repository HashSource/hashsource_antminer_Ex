void **__fastcall sub_346520(void **a1, char *s)
{
  int v4; // r1

  if ( s )
    v4 = (int)&s[strlen(s)];
  else
    v4 = -1;
  *a1 = sub_346230(s, (_BYTE *)v4);
  return a1;
}
