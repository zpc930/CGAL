include(ReadLines)
include(FindMatchingItem)

if ( OPENGL_FOUND AND OPENGL_INCLUDE_DIR )
                                        
message( STATUS "OPENGL_INCLUDE_DIR=${OPENGL_INCLUDE_DIR}" )
   
  set( OPENGL_VERSION "unknown" )
  
  readlines(${OPENGL_INCLUDE_DIR}/GL/gl.h OPENGL_VERSION_FILE)

  if ( OPENGL_VERSION_FILE )
  
    find_matching_item(OPENGL_VERSION_FILE "GL_VERSION_2_2" OPENGL_VERSION_LINE )
    if ( OPENGL_VERSION_LINE )
      set( OPENGL_VERSION "2.2" )
    else()
      find_matching_item(OPENGL_VERSION_FILE "GL_VERSION_2_1" OPENGL_VERSION_LINE )
      if ( OPENGL_VERSION_LINE )
        set( OPENGL_VERSION "2.1" )
      else()
        find_matching_item(OPENGL_VERSION_FILE "GL_VERSION_2_0" OPENGL_VERSION_LINE )
        if ( OPENGL_VERSION_LINE )
          set( OPENGL_VERSION "2.0" )
        else()
          find_matching_item(OPENGL_VERSION_FILE "GL_VERSION_1_5" OPENGL_VERSION_LINE )
          if ( OPENGL_VERSION_LINE )
            set( OPENGL_VERSION "1.5" )
          else()
            find_matching_item(OPENGL_VERSION_FILE "GL_VERSION_1_4" OPENGL_VERSION_LINE )
            if ( OPENGL_VERSION_LINE )
              set( OPENGL_VERSION "1.4" )
            else()
              find_matching_item(OPENGL_VERSION_FILE "GL_VERSION_1_3" OPENGL_VERSION_LINE )
              if ( OPENGL_VERSION_LINE )
                set( OPENGL_VERSION "1.4" )
              else()
                find_matching_item(OPENGL_VERSION_FILE "GL_VERSION_1_2" OPENGL_VERSION_LINE )
                if ( OPENGL_VERSION_LINE )
                  set( OPENGL_VERSION "1.4" )
                else()
                  find_matching_item(OPENGL_VERSION_FILE "GL_VERSION_1_1" OPENGL_VERSION_LINE )
                  if ( OPENGL_VERSION_LINE )
                    set( OPENGL_VERSION "1.4" )
                  else()
                    find_matching_item(OPENGL_VERSION_FILE "GL_VERSION_1_0" OPENGL_VERSION_LINE )
                    if ( OPENGL_VERSION_LINE )
                      set( OPENGL_VERSION "1.0" )
                    endif()
                  endif()
                endif()
              endif()
            endif()
          endif()
        endif()
      endif()
    endif()
  else()
  
    message( STATUS "WARNING: OpenGL found but could not open ${OPENGL_INCLUDE_DIR}/GL/gl.h" )
    
  endif()
  
  message( STATUS "USING OPENGL_VERSION = '${OPENGL_VERSION}'" )
  
endif()

