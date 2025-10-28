bool __fastcall sub_195CEC(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // r4
  char *v2; // r0

  v1 = a1;
  if ( strchr("\"'", *a1) )
    ++v1;
  v2 = sub_935F8(v1);
  return !*v2 || sub_195C04(v2) != 0;
}
