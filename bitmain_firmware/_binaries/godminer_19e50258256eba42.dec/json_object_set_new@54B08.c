int __fastcall json_object_set_new(json_t *a1, const char *a2, json_t *a3)
{
  size_t v3; // r0

  if ( a2 )
  {
    v3 = strlen(a2);
    if ( utf8_check_string((int)a2, v3) )
      return json_object_set_new_nocheck(a1, a2, a3);
  }
  sub_54798((int)a3);
  return -1;
}
