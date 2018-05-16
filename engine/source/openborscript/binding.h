
typedef enum
{
    _BINDING_ANIMATION,
    _BINDING_BIND,
    _BINDING_DIRECTION,
    _BINDING_OFFSET,
    _BINDING_SORT_ID,
    _BINDING_TARGET,
    _BINDING_END,
} e_binding_properties;

// Binding properties.
HRESULT openbor_get_binding_property(ScriptVariant **varlist , ScriptVariant **pretvar, int paramCount);
HRESULT openbor_set_binding_property(ScriptVariant **varlist , ScriptVariant **pretvar, int paramCount);

int mapstrings_binding(ScriptVariant **varlist, int paramCount);

