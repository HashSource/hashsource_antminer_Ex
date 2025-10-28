void *__fastcall sub_1E0B38(int a1, _DWORD *a2)
{
  size_t v2; // r0
  void *result; // r0

  if ( *a2 )
  {
    sub_94728(
      (int)"registry.c",
      49,
      "%s: Assertion `%s' failed.",
      "void registry_alloc_data(registry_data_registry*, registry_fields*)",
      "fields->data == NULL");
    JUMPOUT(0x1E0B98);
  }
  v2 = *(_DWORD *)(a1 + 4);
  a2[1] = v2;
  result = sub_930BC(v2, 4u);
  *a2 = result;
  return result;
}
