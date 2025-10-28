_DWORD *__fastcall sub_162574(int a1, _DWORD *a2, int a3)
{
  _DWORD *result; // r0

  result = (_DWORD *)(*(_DWORD *)(a1 + 164) + 56);
  if ( *a2 >= result[1] )
  {
    sub_94728(
      (int)"registry.c",
      102,
      "%s: Assertion `%s' failed.",
      "void registry_set_data(registry_fields*, const registry_data*, void*)",
      "data->index < fields->num_data");
    JUMPOUT(0x1E0D58);
  }
  *(_DWORD *)(*result + 4 * *a2) = a3;
  return result;
}
