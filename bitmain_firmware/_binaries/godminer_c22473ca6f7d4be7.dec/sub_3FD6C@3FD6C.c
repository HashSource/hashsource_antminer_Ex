bool __fastcall sub_3FD6C(_DWORD *a1, _DWORD *a2, char *a3)
{
  _DWORD *v6; // r0
  char *v7; // r0

  json_object();
  v6 = json_integer((int)a2);
  json_object_set_new(a2, "code", v6);
  v7 = BUFX_strdup(a3);
  json_object_set_new(a2, "message", v7);
  return json_object_set_new(a1, "error", a2) != -1;
}
