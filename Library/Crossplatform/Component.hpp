#paragma once

__BEGIN_NAME_SPACE__


/**
 * Define standard component, com/corba similar
 */
typedef u64  GUID;
typedef long HResult;
 
interface IComponent {
    /**
     * Cast current component to another component, automatically call acquire when success.
     */
    virtual HResult STD_CALL Cast(/*in*/GUID tid, /*out*/IComponent** pComponent) = 0;
    
    /**
     * Acquire component manually to avoid it release when still using it.
     */
    virtual u32 STD_CALL Acquire() = 0;
    
    /**
     * Release component, it can check to destroy.
     */
    virtual u32 STD_CALL Release() = 0;
};

interface IComponentFactory {
    virtual HResult STD_CALL CreateComponent(/*in*/GUID tid, /*out*/IComponent** pComponent) = 0;
};


__END_NAME_SPACE__
