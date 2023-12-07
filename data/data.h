
struct indegridient
{
    char name[70];
};
struct Recipe
{
    int id;
    char title[30];
    struct indegridient indegridients[20];
    char steps[400];
};

struct Recipe dessert_recepies_list[10] = {
    {1, "gulab jamun", {"Milk Powder", "Flour", "Yogurt", "Sugar", "Water", "Cardamom", "Rose Water", "Oil"}, "Mix milk powder, flour, and yogurt into a dough. Shape into balls and fry. Soak in sugar syrup flavored with cardamom and rose water."},
    {2, "kheer", {"Rice", "Milk", "Sugar", "Cardamom", "Saffron", "Almonds", "Pistachios", "Raisins"}, "Cook rice in milk until soft. Add sugar, cardamom, saffron, almonds, pistachios, and raisins. Cook until thickened."},
    {3, "barfi", {"Milk Powder", "Condensed Milk", "Ghee", "Sugar", "Cardamom", "Nuts"}, "Mix milk powder, condensed milk, and ghee. Cook with sugar, cardamom, and nuts until thick. Spread in a tray and cool. Cut into squares."},
    {4, "jalebi", {"Flour", "Yogurt", "Sugar", "Water", "Saffron", "Cardamom", "Oil"}, "Make a batter with flour and yogurt. Pipe into hot oil in circular shapes. Fry until crispy and soak in sugar syrup flavored with saffron and cardamom."},
    {5, "rasgulla", {"Milk", "Sugar", "Lemon Juice", "Water"}, "Boil milk, add lemon juice to curdle. Strain and knead the curds into balls. Cook in sugar syrup until spongy."},
    {6, "falooda", {"Milk", "Vermicelli", "Basil Seeds", "Rose Syrup", "Ice Cream", "Nuts", "Jelly"}, "Soak vermicelli and basil seeds. Layer in a glass with rose syrup, milk, ice cream, nuts, and jelly."},
    {7, "gajar Halwa", {"Carrots", "Milk", "Sugar", "Ghee", "Cardamom", "Nuts"}, "Grate carrots and cook with milk until soft. Add sugar, ghee, cardamom, and nuts. Cook until thickened."},
    {8, "shahi tukda", {"Bread", "Ghee", "Milk", "Sugar", "Saffron", "Cardamom", "Nuts"}, "Fry bread in ghee until golden. Soak in sugar syrup. Serve with reduced milk, saffron, cardamom, and nuts."},
    {9, "rasmalai", {"Milk", "Sugar", "Saffron", "Cardamom", "Almonds", "Pistachios"}, "Boil milk and curdle. Knead into discs and cook in sugar syrup. Serve with saffron, cardamom, almonds, and pistachios."},
    {10, "firni", {"Rice", "Milk", "Sugar", "Cardamom", "Saffron", "Almonds", "Pistachios"}, "Soak rice and blend. Cook with milk, sugar, cardamom, saffron, almonds, and pistachios until thick. Serve chilled."}};
struct Recipe pakistani_recepies_list[10] = {
    {1, "biryani", {"Basmati Rice", "Chicken", "Yogurt", "Onion", "Tomato", "Ginger Garlic Paste", "Green Chilies", "Spices", "Saffron", "Mint", "Coriander", "Oil", "Potatoes"}, "Marinate chicken with spices and yogurt. Cook rice separately. Layer marinated chicken and partially cooked rice. Garnish with fried onions, mint, and saffron-infused milk. Dum cook until done."},
    {2, "nihari", {"Beef", "Wheat Flour", "Ginger Garlic Paste", "Onion", "Spices", "Oil", "Yogurt", "Lemon", "Green Chilies", "Coriander"}, "Slow-cook beef with spices, ginger-garlic paste, and wheat flour until tender. Serve garnished with fried onions, lemon, green chilies, and fresh coriander."},
    {3, "haleem", {"Wheat", "Barley", "Meat", "Lentils", "Spices", "Ginger Garlic Paste", "Onion", "Oil", "Yogurt", "Lemon", "Coriander"}, "Cook wheat, barley, lentils, and meat with spices until everything is soft. Blend to a thick consistency. Garnish with fried onions, lemon, and coriander."},
    {4, "samosa", {"Flour", "Potatoes", "Peas", "Spices", "Oil", "Onion", "Ginger Garlic Paste"}, "Make a dough with flour, fill with a mixture of mashed potatoes, peas, and spices. Shape into triangles and deep-fry until golden brown."},
    {5, "chapli Kebab", {"Minced Beef", "Onion", "Tomato", "Green Chilies", "Egg", "Spices", "Coriander", "Mint", "Oil"}, "Mix minced beef with spices, onions, tomatoes, green chilies, egg, coriander, and mint. Shape into flat patties and shallow fry until cooked."},
    {6, "aloo Gosht", {"Mutton", "Potatoes", "Onion", "Tomato", "Ginger Garlic Paste", "Spices", "Oil", "Yogurt"}, "Cook mutton with ginger-garlic paste, spices, onion, and tomatoes until tender. Add potatoes and cook until done."},
    {7, "saag", {"Mustard Leaves", "Spinach", "Fenugreek Leaves", "Onion", "Tomato", "Green Chilies", "Spices", "Oil"}, "Boil and finely chop mustard leaves, spinach, and fenugreek leaves. Cook with spices, onion, tomatoes, and green chilies. Garnish with butter or cream."},
    {8, "chicken Karahi", {"Chicken", "Tomato", "Green Chilies", "Ginger", "Garlic", "Spices", "Oil", "Coriander"}, "Cook chicken with tomatoes, green chilies, ginger, garlic, and spices in a karahi. Garnish with fresh coriander."},
    {9, "paya", {"Goat Trotters", "Spices", "Ginger Garlic Paste", "Onion", "Tomato", "Green Chilies", "Oil", "Yogurt", "Coriander"}, "Slow-cook goat trotters with spices, ginger-garlic paste, onion, tomatoes, and green chilies. Garnish with fresh coriander."},
    {10, "kofta", {"Minced Meat", "Onion", "Tomato", "Ginger Garlic Paste", "Spices", "Oil", "Yogurt", "Coriander"}, "Mix minced meat with spices, onion, and tomatoes. Shape into balls and cook in a gravy made with yogurt and spices. Garnish with fresh coriander."}};
struct Recipe breakfast_recepies_list[10] = {
    {1, "scrambled eggs", {"eggs", "butter", "salt", "pepper"}, "Whisk eggs with salt and pepper. Melt butter in a pan, add eggs, and scramble until cooked."},
    {2, "pancakes", {"flour", "milk", "eggs", "baking_powder", "sugar", "butter"}, "Mix flour, milk, eggs, baking powder, and sugar until smooth. Cook spoonfuls on a hot, greased skillet until golden brown."},
    {3, "omelette", {"eggs", "cheese", "bell_pepper", "onion", "ham", "salt", "pepper"}, "Whisk eggs with salt and pepper. Pour into a hot, greased pan. Add cheese, bell pepper, onion, and ham. Fold when cooked."},
    {4, "fruit smoothie", {"banana", "berries", "yogurt", "milk", "honey"}, "Blend banana, berries, yogurt, milk, and honey until smooth."},
    {5, "avocado toast", {"avocado", "bread", "olive_oil", "salt", "pepper", "lemon_juice", "red_pepper_flakes"}, "Mash avocado with salt, pepper, lemon juice, and red pepper flakes. Spread on toasted bread."},
    {6, "french toast", {"bread", "eggs", "milk", "cinnamon", "vanilla_extract", "butter"}, "Whisk eggs with milk, cinnamon, and vanilla extract. Dip bread slices in the mixture. Cook in a buttered skillet until golden."},
    {7, "breakfast burrito", {"tortilla", "eggs", "bacon", "cheese", "salsa", "avocado"}, "Scramble eggs. Fill tortilla with eggs, bacon, cheese, salsa, and avocado. Roll up and serve."},
    {8, "granola with yogurt", {"granola", "yogurt", "berries", "honey"}, "Layer granola, yogurt, berries, and honey in a bowl."},
    {9, "bagel with cream cheese", {"bagel", "cream_cheese"}, "Slice bagel, spread with cream cheese, and serve."},
    {10, "veggie omelette", {"eggs", "spinach", "tomato", "onion", "mushrooms", "bell_pepper", "cheese", "salt", "pepper"}, "Whisk eggs with salt and pepper. Pour into a pan with spinach, tomato, onion, mushrooms, bell pepper, and cheese. Fold when cooked."}};

struct Recipe dinner_recepies_list[10] = {
    {1, "spaghetti_bolognese", {"spaghetti", "ground_beef", "onion", "garlic", "tomato_sauce", "basil", "oregano", "salt", "pepper"}, "Cook spaghetti. Brown ground beef with onion and garlic. Add tomato sauce, basil, oregano, salt, and pepper. Simmer and serve over spaghetti."},
    {2, "grilled_salmon", {"salmon_fillets", "lemon", "olive_oil", "garlic", "dill", "salt", "pepper"}, "Marinate salmon in lemon juice, olive oil, garlic, dill, salt, and pepper. Grill until cooked through."},
    {3, "chicken_stir_fry", {"chicken_breast", "bell_pepper", "broccoli", "onion", "soy_sauce", "garlic", "ginger", "oil", "rice"}, "Stir-fry chicken, bell pepper, broccoli, and onion in oil. Add soy sauce, garlic, and ginger. Serve over rice."},
    {4, "vegetable_lasagna", {"lasagna_noodles", "tomato_sauce", "ricotta_cheese", "mozzarella_cheese", "spinach", "zucchini", "onion", "garlic", "oregano", "salt", "pepper"}, "Layer lasagna noodles with tomato sauce, ricotta cheese, mozzarella cheese, spinach, zucchini, onion, garlic, oregano, salt, and pepper. Bake until bubbly."},
    {5, "beef_tacos", {"ground_beef", "taco_seasoning", "tortillas", "lettuce", "tomato", "cheese", "sour_cream"}, "Brown ground beef with taco seasoning. Fill tortillas with beef, lettuce, tomato, cheese, and sour cream."},
    {6, "hummus", {"chicken_thighs", "lemon_juice", "rosemary", "thyme", "garlic", "olive_oil", "salt", "pepper"}, "Marinate chicken thighs in lemon juice, rosemary, thyme, garlic, olive oil, salt, and pepper. Bake until golden brown."},
    {7, "shrimp_pasta", {"shrimp", "linguine_pasta", "garlic", "butter", "parsley", "red_pepper_flakes", "salt", "pepper"}, "Cook pasta. Sauté shrimp with garlic, butter, parsley, red pepper flakes, salt, and pepper. Toss with cooked pasta."},
    {8, "beef_stew", {"beef_stew_meat", "potatoes", "carrots", "onion", "celery", "beef_broth", "tomato_paste", "bay_leaves", "thyme", "salt", "pepper"}, "Brown beef stew meat. Add potatoes, carrots, onion, celery, beef broth, tomato paste, bay leaves, thyme, salt, and pepper. Simmer until meat is tender."},
    {9, "eggplant_parmesan", {"eggplant", "breadcrumbs", "eggs", "marinara_sauce", "mozzarella_cheese", "parmesan_cheese", "basil", "oregano", "salt", "pepper"}, "Coat eggplant in breadcrumbs and eggs. Bake until golden. Layer with marinara sauce, mozzarella cheese, parmesan cheese, basil, oregano, salt, and pepper. Bake until cheese melts."},
    {10, "vegetarian_curry", {"chickpeas", "cauliflower", "carrots", "onion", "garlic", "ginger", "coconut_milk", "curry_powder", "turmeric", "cumin", "salt", "pepper"}, "Sauté onion, garlic, and ginger. Add chickpeas, cauliflower, carrots, coconut milk, curry powder, turmeric, cumin, salt, and pepper. Simmer until vegetables are tender."}};

struct Recipe snacks_recepies_list[10] = {
    {1, "guacamole", {"avocado", "tomato", "onion", "lime", "cilantro", "salt"}, "Mash avocados, add diced tomatoes, onions, lime juice, cilantro, and salt. Mix well."},
    {2, "caprese_salad", {"tomato", "mozzarella", "basil", "olive_oil", "balsamic_vinegar", "salt", "pepper"}, "Layer sliced tomatoes, mozzarella, and basil leaves. Drizzle with olive oil and balsamic vinegar. Season with salt and pepper."},
    {3, "hummus", {"chickpeas", "tahini", "lemon_juice", "garlic", "olive_oil", "cumin", "salt"}, "Blend chickpeas, tahini, lemon juice, garlic, olive oil, cumin, and salt until smooth."},
    {4, "fruit_salad", {"apple", "banana", "orange", "grapes", "honey", "lemon_juice"}, "Cut fruits into bite-sized pieces. Mix in a bowl. Drizzle with honey and lemon juice. Toss gently to combine."},
    {5, "trail_mix", {"almonds", "cashews", "peanuts", "raisins", "chocolate_chips"}, "Combine almonds, cashews, peanuts, raisins, and chocolate chips in a bowl. Mix well."},
    {6, "deviled_eggs", {"eggs", "mayonnaise", "mustard", "paprika", "salt", "pepper"}, "Boil eggs, peel and halve them. Remove yolks and mix with mayonnaise, mustard, salt, and pepper. Fill egg whites with the mixture. Sprinkle paprika on top."},
    {7, "bruschetta", {"bread", "tomato", "garlic", "basil", "olive_oil", "balsamic_vinegar", "salt", "pepper"}, "Toast bread slices. Combine diced tomatoes, garlic, basil, olive oil, and balsamic vinegar. Season with salt and pepper. Spoon the mixture onto the toasted bread."},
    {8, "popcorn", {"popcorn_kernels", "butter", "salt"}, "Pop popcorn kernels. Melt butter and drizzle it over the popcorn. Sprinkle salt and toss to coat evenly."},
    {9, "cheese_plate", {"cheddar_cheese", "brie_cheese", "crackers", "grapes", "nuts"}, "Arrange cheddar cheese, brie cheese, crackers, grapes, and nuts on a plate."},
    {10, "veggie_sticks", {"carrots", "celery", "bell_pepper", "cucumber", "ranch_dressing"}, "Cut carrots, celery, bell pepper, and cucumber into sticks. Serve with ranch dressing for dipping."}};