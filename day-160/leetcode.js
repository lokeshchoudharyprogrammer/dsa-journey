/**
 * @param {string[]} paths
 * @return {string[][]}
 */
var findDuplicate = function(paths) {
        
    let obj = {};

  
    for (let k = 0; k < paths.length; k++) {

        let files_content = paths[k];
        let array = files_content.split(" ");
        let folder_path = array[0];

        for (let j = 1; j < array.length; j++) {
            
            let file = array[j];

            let index_of_open_bracket = file.indexOf('(');
            let index_of_close_bracket = file.indexOf(')');

            if (index_of_close_bracket > 0) {

                let content = file.slice(index_of_open_bracket + 1, index_of_close_bracket);
                let file_name = file.slice(0, index_of_open_bracket);
                let full_path = `${folder_path}/${file_name}`;

                if (!obj[content]) {
                    obj[content] = [];
                }
                    
                obj[content].push(full_path);
            }
        }
    }

    let result = [];

    for (let content in obj) {
        if (obj[content].length > 1) {
            result.push(obj[content]);
        }
    }

    return (result);
};