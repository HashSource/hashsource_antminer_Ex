void *__fastcall get_system_capability(void *result)
{
  if ( result )
    return memcpy(result, &dword_176F88, 0x124u);
  return result;
}
