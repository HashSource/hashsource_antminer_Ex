bool __fastcall sub_43084(_DWORD *a1, _DWORD *a2, const char *a3)
{
  _QWORD *v6; // r0
  char *v7; // r0

  json_object();
  v6 = json_integer((int)a2);
  json_object_set_new(a2, "code", v6);
  v7 = (char *)json_string(a3);
  json_object_set_new(a2, "message", v7);
  return json_object_set_new(a1, "error", a2) != -1;
}
