FILE **__fastcall sub_256A70(FILE **ptr)
{
  int v1; // r3

  v1 = *((unsigned __int8 *)ptr + 12);
  *ptr = (FILE *)&off_3F2974;
  if ( v1 )
    fclose(ptr[1]);
  sub_33AC2C(ptr);
  return ptr;
}
